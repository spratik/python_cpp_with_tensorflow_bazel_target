load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")


cc_library(
    name = "python",
    hdrs = glob(["include/*.h", "include/cpython/*.h", "include/internal/*.h"]),
	srcs = glob(["libs/*.lib"]),
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "python_cpp",
    srcs = ["python_cpp.cc"],
	copts = ["-Iinclude", "-Llibs"],
    deps = [
        ":python",
    ]
)
