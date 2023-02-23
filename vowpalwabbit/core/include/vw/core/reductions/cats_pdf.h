// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.

#pragma once
#include "vw/core/learner.h"

#include <memory>

namespace VW
{
namespace reductions
{
std::shared_ptr<VW::LEARNER::learner> cats_pdf_setup(setup_base_i& stack_builder);
}
}  // namespace VW
