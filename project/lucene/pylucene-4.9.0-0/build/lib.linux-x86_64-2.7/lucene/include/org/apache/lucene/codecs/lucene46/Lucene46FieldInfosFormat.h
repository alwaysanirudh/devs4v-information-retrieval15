#ifndef org_apache_lucene_codecs_lucene46_Lucene46FieldInfosFormat_H
#define org_apache_lucene_codecs_lucene46_Lucene46FieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldInfosWriter;
        class FieldInfosReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene46 {

          class Lucene46FieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getFieldInfosReader_6ecd5494,
              mid_getFieldInfosWriter_211ffa60,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene46FieldInfosFormat(jobject obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            Lucene46FieldInfosFormat(const Lucene46FieldInfosFormat& obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {}

            Lucene46FieldInfosFormat();

            ::org::apache::lucene::codecs::FieldInfosReader getFieldInfosReader() const;
            ::org::apache::lucene::codecs::FieldInfosWriter getFieldInfosWriter() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene46 {
          extern PyTypeObject PY_TYPE(Lucene46FieldInfosFormat);

          class t_Lucene46FieldInfosFormat {
          public:
            PyObject_HEAD
            Lucene46FieldInfosFormat object;
            static PyObject *wrap_Object(const Lucene46FieldInfosFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
