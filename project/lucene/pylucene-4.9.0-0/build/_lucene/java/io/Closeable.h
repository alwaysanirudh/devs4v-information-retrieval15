#ifndef java_io_Closeable_H
#define java_io_Closeable_H

#include "java/lang/AutoCloseable.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Closeable : public ::java::lang::AutoCloseable {
    public:
      enum {
        mid_close_54c6a166,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Closeable(jobject obj) : ::java::lang::AutoCloseable(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Closeable(const Closeable& obj) : ::java::lang::AutoCloseable(obj) {}

      void close() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyTypeObject PY_TYPE(Closeable);

    class t_Closeable {
    public:
      PyObject_HEAD
      Closeable object;
      static PyObject *wrap_Object(const Closeable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
