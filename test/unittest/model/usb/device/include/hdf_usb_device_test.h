/*
 * Copyright (c) 2020-2021 Huawei Device Co., Ltd.
 *
 * HDF is dual licensed: you can use it either under the terms of
 * the GPL, or the BSD license, at your option.
 * See the LICENSE file in the root of this repository for complete details.
 */

#ifndef HDF_USB_DEVICE_TEST_H
#define HDF_USB_DEVICE_TEST_H

#include "hdf_base.h"
#include "hdf_main_test.h"

typedef enum {
    USB_DEVICE_CREATE_DEVICE,
    USB_DEVICE_CREATE_DEVICE002,
    USB_DEVICE_CREATE_DEVICE003,
    USB_DEVICE_CREATE_DEVICE004,
    USB_DEVICE_CREATE_DEVICE005,
    USB_DEVICE_CREATE_DEVICE006,
    USB_DEVICE_DEVICE_STATUS,
    USB_DEVICE_DEVICE_STATUS002,
    USB_DEVICE_DEVICE_STATUS003,
    USB_DEVICE_DEVICE_STATUS004,
    USB_DEVICE_DEVICE_STATUS005,
    USB_DEVICE_GET_DEVICE,
    USB_DEVICE_GET_DEVICE002,
    USB_DEVICE_GET_DEVICE003,
    USB_DEVICE_GET_DEVICE004,
    USB_DEVICE_GET_DEVICE005,
    USB_DEVICE_GET_DEVICE006,
    USB_DEVICE_GET_INTERFACE,
    USB_DEVICE_GET_INTERFACE002,
    USB_DEVICE_GET_INTERFACE003,
    USB_DEVICE_GET_INTERFACE004,
    USB_DEVICE_GET_INTERFACE005,
    USB_DEVICE_GET_INTERFACE006,
    USB_DEVICE_GET_PIPEINFO,
    USB_DEVICE_GET_PIPEINFO002,
    USB_DEVICE_GET_PIPEINFO003,
    USB_DEVICE_GET_PIPEINFO004,
    USB_DEVICE_GET_PIPEINFO005,
    USB_DEVICE_GET_PIPEINFO006,
    USB_DEVICE_REQUEST_ASYNC,
    USB_DEVICE_REQUEST_ASYNC002,
    USB_DEVICE_REQUEST_ASYNC003,
    USB_DEVICE_REQUEST_ASYNC004,
    USB_DEVICE_REQUEST_ASYNC005,
    USB_DEVICE_REQUEST_ASYNC006,
    USB_DEVICE_REQUEST_SYNC,
    USB_DEVICE_REQUEST_SYNC002,
    USB_DEVICE_REQUEST_SYNC003,
    USB_DEVICE_REQUEST_SYNC004,
    USB_DEVICE_REQUEST_SYNC005,
    USB_DEVICE_REQUEST_SYNC006,
    USB_DEVICE_REQUEST_SYNC007,
    USB_DEVICE_REGIST_PROP,
    USB_DEVICE_REGIST_PROP002,
    USB_DEVICE_REGIST_PROP003,
    USB_DEVICE_REGIST_PROP004,
    USB_DEVICE_REGIST_PROP005,
    USB_DEVICE_REGIST_PROP006,
    USB_DEVICE_REGIST_PROP007,
    USB_DEVICE_GET_PROP,
    USB_DEVICE_GET_PROP002,
    USB_DEVICE_GET_PROP003,
    USB_DEVICE_GET_PROP004,
    USB_DEVICE_GET_PROP005,
    USB_DEVICE_GET_PROP006,
    USB_DEVICE_GET_PROP007,
    USB_DEVICE_GET_PROP008,
    USB_DEVICE_SET_PROP,
    USB_DEVICE_SET_PROP002,
    USB_DEVICE_SET_PROP003,
    USB_DEVICE_SET_PROP004,
    USB_DEVICE_SET_PROP005,
    USB_DEVICE_SET_PROP006,
    USB_DEVICE_SET_PROP007,
    USB_DEVICE_ALLOC_CTRLREQUEST,
    USB_DEVICE_ALLOC_CTRLREQUEST002,
    USB_DEVICE_ALLOC_CTRLREQUEST003,
    USB_DEVICE_ALLOC_CTRLREQUEST004,
    USB_DEVICE_ALLOC_CTRLREQUEST005,
    USB_DEVICE_ALLOC_CTRLREQUEST006,
    USB_DEVICE_ALLOC_CTRLREQUEST007,
    USB_DEVICE_ALLOC_CTRLREQUEST008,
    USB_DEVICE_ALLOC_REQUEST,
    USB_DEVICE_ALLOC_REQUEST002,
    USB_DEVICE_ALLOC_REQUEST003,
    USB_DEVICE_ALLOC_REQUEST004,
    USB_DEVICE_ALLOC_REQUEST005,
    USB_DEVICE_ALLOC_REQUEST006,
    USB_DEVICE_ALLOC_REQUEST007,
    USB_DEVICE_ALLOC_REQUEST008,
    USB_DEVICE_ALLOC_REQUEST009,
    USB_DEVICE_FREE_REQUEST,
    USB_DEVICE_FREE_REQUEST002,
    USB_DEVICE_FREE_REQUEST003,
    USB_DEVICE_FREE_REQUEST004,
    USB_DEVICE_FREE_REQUEST005,
    USB_DEVICE_FREE_REQUEST006,
    USB_DEVICE_GET_REQUEST_STATUS,
    USB_DEVICE_GET_REQUEST_STATUS002,
    USB_DEVICE_GET_REQUEST_STATUS003,
    USB_DEVICE_GET_REQUEST_STATUS004,
    USB_DEVICE_GET_REQUEST_STATUS005,
    USB_DEVICE_GET_REQUEST_STATUS006,
    USB_DEVICE_CANCEL_REQUEST,
    USB_DEVICE_CANCEL_REQUEST002,
    USB_DEVICE_CANCEL_REQUEST003,
    USB_DEVICE_CANCEL_REQUEST004,
    USB_DEVICE_CANCEL_REQUEST005,
    USB_DEVICE_CANCEL_REQUEST006,
    USB_DEVICE_STOP_EVENT,
    USB_DEVICE_STOP_EVENT002,
    USB_DEVICE_STOP_EVENT003,
    USB_DEVICE_STOP_EVENT004,
    USB_DEVICE_START_EVENT,
    USB_DEVICE_START_EVENT002,
    USB_DEVICE_START_EVENT003,
    USB_DEVICE_START_EVENT004,
    USB_DEVICE_START_EVENT005,
    USB_DEVICE_START_EVENT006,
    USB_DEVICE_START_EVENT007,
    USB_DEVICE_CLOSE_INTERFACE,
    USB_DEVICE_CLOSE_INTERFACE002,
    USB_DEVICE_CLOSE_INTERFACE003,
    USB_DEVICE_CLOSE_INTERFACE004,
    USB_DEVICE_OPEN_INTERFACE,
    USB_DEVICE_OPEN_INTERFACE002,
    USB_DEVICE_OPEN_INTERFACE003,
    USB_DEVICE_OPEN_INTERFACE004,
    USB_DEVICE_OPEN_INTERFACE005,
    USB_DEVICE_DELETE_DEVICE,
    USB_DEVICE_DELETE_DEVICE002,
    USB_DEVICE_MESSAGE_END = 300,
} HdfUsbDeviceTestCaseCmd;

int32_t HdfUsbDeviceEntry(HdfTestMsg *msg);

#endif // HDF_USB_DEVICE_TEST_H