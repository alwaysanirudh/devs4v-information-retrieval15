#ifndef org_apache_lucene_expressions_js_JavascriptParser$relational_return_H
#define org_apache_lucene_expressions_js_JavascriptParser$relational_return_H

#include "org/antlr/runtime/ParserRuleReturnScope.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class JavascriptParser$relational_return : public ::org::antlr::runtime::ParserRuleReturnScope {
          public:
            enum {
              mid_init$_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptParser$relational_return(jobject obj) : ::org::antlr::runtime::ParserRuleReturnScope(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$relational_return(const JavascriptParser$relational_return& obj) : ::org::antlr::runtime::ParserRuleReturnScope(obj) {}

            JavascriptParser$relational_return();
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
      namespace expressions {
        namespace js {
          extern PyTypeObject PY_TYPE(JavascriptParser$relational_return);

          class t_JavascriptParser$relational_return {
          public:
            PyObject_HEAD
            JavascriptParser$relational_return object;
            static PyObject *wrap_Object(const JavascriptParser$relational_return&);
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
