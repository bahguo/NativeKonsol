NativeKonsol Sampel
===========

Repositori ini berisi sampel [Android NDK][0] dengan Android Studio [C++ integrasi](https://www.youtube.com/watch?v=f7ihSQ44WO0&feature=youtu.be).

Sampel-sampel ini menggunakan plugin [CMake Android plugin](https://developer.android.com/studio/projects/add-native-code.html) dengan dukungan C++.

Sampel juga dapat dibangun dengan sistem bangunan lain:
- untuk ndk-build dengan Android Studio, lihat direktori other-builds/ndkbuild
- untuk plugin gradle-experimental, lihat direktori other-builds/experimental. Catat bahwa gradle-experimental plugin belum berfungsi dengan header terpadu: gunakan versi NDK hingga r15 dan Android Studio hingga versi 2.3. Saat memulai proyek baru, silakan gunakan plugin CMake atau ndk-build.

Tambahan Android Studio sampel:    
- [Google Play Game Samples dengan Android Studio](https://github.com/playgameservices/cpp-android-basic-samples)
- [Google Android Vulkan Panduan](https://github.com/googlesamples/android-vulkan-tutorials)
- [Android Vulkan API Dasar Sampel](https://github.com/googlesamples/vulkan-basic-samples)
- [Android Audio Kinerja Tinggi](https://github.com/googlesamples/android-audio-high-performance)	

Dokumentasi
- [Tambah Kode Native ke Proyek Anda](https://developer.android.com/studio/projects/add-native-code.html)
- [CMake untuk NDK](https://developer.android.com/ndk/guides/cmake.html)
- [Halo-CMake Codelab](https://codelabs.developers.google.com/codelabs/android-studio-cmake/index.html)

Known Issues
- Beberapa didokumentasikan di halaman [Android Studio](http://tools.android.com/knownissues)

Untuk sampel yang menggunakan sistem build `Android.mk` build system dengan `ndk-build` lihat cabang [android-mk](https://github.com/googlesamples/android-ndk/tree/android-mk).

Build Steps
----------
- Dengan Android Studio: "Open An Existing Android Studio Project" atau "File" > "Open", lalu navigasi ke & pilih proyek file build.gradle.
- Pada Baris Perintah: atur ANDROID_HOME dan ANDROID_NDK_HOME ke jalut SDK dan NDK anda, cd ke individual sampel dir, dan lakukan "gradlew assembleDebug"

Dukungan
-------

- [Google+ Community](https://plus.google.com/communities/105153134372062985968)
- [Stack Overflow](http://stackoverflow.com/questions/tagged/android)

License
-------

Licensed to the Apache Software Foundation (ASF) under one or more contributor
license agreements.  See the NOTICE file distributed with this work for
additional information regarding copyright ownership.  The ASF licenses this
file to you under the Apache License, Version 2.0 (the "License"); you may not
use this file except in compliance with the License.  You may obtain a copy of
the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
License for the specific language governing permissions and limitations under
the License.

[LICENSE](LICENSE)

[0]: https://developer.android.com/ndk
