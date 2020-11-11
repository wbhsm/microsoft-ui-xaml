// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class AnimatedIconSourceProperties
{
public:
    AnimatedIconSourceProperties();

    void Source(winrt::IRichAnimatedVisualSource const& value);
    winrt::IRichAnimatedVisualSource Source();

    static winrt::DependencyProperty SourceProperty() { return s_SourceProperty; }

    static GlobalDependencyProperty s_SourceProperty;

    static void EnsureProperties();
    static void ClearProperties();
};