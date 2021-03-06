#ifndef org_apache_lucene_search_FuzzyQuery_H
#define org_apache_lucene_search_FuzzyQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
        public:
          enum {
            mid_init$_7eca6a81,
            mid_init$_05555589,
            mid_init$_10c66029,
            mid_init$_12e80fe2,
            mid_equals_290588e2,
            mid_floatToEdits_77691edc,
            mid_getMaxEdits_54c6a179,
            mid_getPrefixLength_54c6a179,
            mid_getTerm_0f71f314,
            mid_getTranspositions_54c6a16a,
            mid_hashCode_54c6a179,
            mid_toString_97a5258f,
            mid_getTermsEnum_67b5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          FuzzyQuery(const FuzzyQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          static jint defaultMaxEdits;
          static jint defaultMaxExpansions;
          static jfloat defaultMinSimilarity;
          static jint defaultPrefixLength;
          static jboolean defaultTranspositions;

          FuzzyQuery(const ::org::apache::lucene::index::Term &);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          static jint floatToEdits(jfloat, jint);
          jint getMaxEdits() const;
          jint getPrefixLength() const;
          ::org::apache::lucene::index::Term getTerm() const;
          jboolean getTranspositions() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyTypeObject PY_TYPE(FuzzyQuery);

        class t_FuzzyQuery {
        public:
          PyObject_HEAD
          FuzzyQuery object;
          static PyObject *wrap_Object(const FuzzyQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
