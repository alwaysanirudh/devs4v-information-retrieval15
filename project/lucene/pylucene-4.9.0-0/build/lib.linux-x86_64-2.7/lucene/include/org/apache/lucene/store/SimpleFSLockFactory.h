#ifndef org_apache_lucene_store_SimpleFSLockFactory_H
#define org_apache_lucene_store_SimpleFSLockFactory_H

#include "org/apache/lucene/store/FSLockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class SimpleFSLockFactory : public ::org::apache::lucene::store::FSLockFactory {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_5fdc3f48,
            mid_init$_c3dacf57,
            mid_clearLock_5fdc3f48,
            mid_makeLock_f26bb9a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleFSLockFactory(jobject obj) : ::org::apache::lucene::store::FSLockFactory(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          SimpleFSLockFactory(const SimpleFSLockFactory& obj) : ::org::apache::lucene::store::FSLockFactory(obj) {}

          SimpleFSLockFactory();
          SimpleFSLockFactory(const ::java::lang::String &);
          SimpleFSLockFactory(const ::java::io::File &);

          void clearLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Lock makeLock(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyTypeObject PY_TYPE(SimpleFSLockFactory);

        class t_SimpleFSLockFactory {
        public:
          PyObject_HEAD
          SimpleFSLockFactory object;
          static PyObject *wrap_Object(const SimpleFSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
