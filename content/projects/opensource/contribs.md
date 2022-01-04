---
title: "Contributions"
---

I have contributed to open source in the following places:

## IBM- Call for Code
- Achieve millisecond level time sync with NTP on the ESP32. [PR#40: Adopt the ESPNtpClient library](https://github.com/openeew/openeew-firmware/pull/40)
- setup pio build workflow for WatsonIOT in [PR#39](https://github.com/openeew/openeew-firmware/pull/39).
- identify reason behind failure and fix travis build issue. [PR#248](https://github.com/Call-for-Code/ClusterDuck-Protocol/pull/248)

## GSoC 2021
- Tried to add librobotcontrol support to the BeagleBone AI in [PR#204](https://github.com/beagleboard/librobotcontrol/pull/204).
- Added a device tree overlay for the audio cape on the BeagleBone AI using the Cape Compatiblity layer and merged to the official BeagleBoard-Device Trees repo in [PR#33](https://github.com/beagleboard/BeagleBoard-DeviceTrees/pull/33).
- Fixed [issue#34](https://github.com/beagleboard/BeagleBoard-DeviceTrees/issues/34) in the audio overlay for the BBAI that was causing a minor offset in the output audio frequency in [PR#36](https://github.com/beagleboard/BeagleBoard-DeviceTrees/pull/36).
- Added dependency and updated README in PRUDebug in [PR#1](https://github.com/giuliomoro/prudebug/pull/1).
- Ported PRUDebug used by Mark Yoder in his tutorials. It was merged by him to his repo in [PR#7](https://github.com/MarkAYoder/BeagleBoard-exercises/pull/7)
- Ported Prudebug having the `j` instruction in [PR#2](https://github.com/giuliomoro/prudebug/pull/2) in `giuliomoro/prudebug`
- Created the [BBAI-BELA Overlay to support the BELA Cape on BBAI using the Cape Compatibility Layer](https://github.com/DhruvaG2000/BeagleBoard-DeviceTrees/blob/v4.19.x-ti-overlays/src/arm/overlays/BBAI-BELA-00A1.dts).
- Created PruManager.cpp and PruManager.h to help port the Bela Code to AM572x and also provide backward compatibility under a single roof. [click here](https://github.com/giuliomoro/Bela-dhruva/pull/1)

## Other
- **Yocto Project**:  scripts/checklayer/common.py:
    - [Test case to review if the README file specifies the maintainer, specifies the word patch, and contains an email address](https://lists.openembedded.org/g/openembedded-core/message/158966?p=%2C%2C%2C20%2C0%2C0%2C0%3A%3Arecentpostdate%2Fsticky%2C%2CBug%2311131%2C20%2C2%2C0%2C87397246)
    - Fixed a minor grammatical error
- Update **Zephyr RTOS** Documentation: [boards: Arduino Nano BLE 33: update documentation PR#38542](https://github.com/zephyrproject-rtos/zephyr/pull/38542)
- Writing a blog for SRA VJTI: [gdb-for-noobs PR#1](https://github.com/SRA-VJTI/blog/pull/1).
- Added instructions for using an ADC library for UncleRus/esp-idf-lib in [PR#163](https://github.com/UncleRus/esp-idf-lib/pull/163).
