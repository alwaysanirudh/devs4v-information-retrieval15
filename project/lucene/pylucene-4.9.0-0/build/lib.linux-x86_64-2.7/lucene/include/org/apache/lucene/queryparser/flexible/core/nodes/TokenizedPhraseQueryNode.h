#ifndef org_apache_lucene_queryparser_flexible_core_nodes_TokenizedPhraseQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_TokenizedPhraseQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
              class FieldableNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CloneNotSupportedException;
    class CharSequence;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class TokenizedPhraseQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_cloneTree_b387c5e6,
                  mid_getField_e0adba2f,
                  mid_setField_a8afc64a,
                  mid_toQueryString_99b8dfe1,
                  mid_toString_14c7b5c5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TokenizedPhraseQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                TokenizedPhraseQueryNode(const TokenizedPhraseQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                TokenizedPhraseQueryNode();

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                void setField(const ::java::lang::CharSequence &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyTypeObject PY_TYPE(TokenizedPhraseQueryNode);

              class t_TokenizedPhraseQueryNode {
              public:
                PyObject_HEAD
                TokenizedPhraseQueryNode object;
                static PyObject *wrap_Object(const TokenizedPhraseQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
