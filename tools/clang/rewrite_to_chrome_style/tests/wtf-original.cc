// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Make sure things in namespace WTF are also renamed.
namespace WTF {

int makingGlobalsGreatAgain = 0;

void runTheThing(int chicken) {
}

struct XmlHTTPRequest {
  void sendSync();

  int m_readyState;
};

}  // namespace WTF
