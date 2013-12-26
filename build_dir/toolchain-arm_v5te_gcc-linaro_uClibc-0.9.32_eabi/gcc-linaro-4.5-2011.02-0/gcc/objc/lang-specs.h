/* Definitions for specs for Objective-C.
   Copyright (C) 1998, 1999, 2002, 2002, 2003, 2005, 2007
   Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */


/* This is the contribution to the `default_compilers' array in gcc.c for
   objc.  */

  {".m", "@objective-c", 0, 0, 0},
  {"@objective-c",
     "%{E|M|MM:cc1obj -E %{traditional|ftraditional|traditional-cpp:-traditional-cpp}\
          %(cpp_options) %(cpp_debug_options)}\
        %{fsection-anchors: %eGNU Objective C can't use -fsection-anchors} \
      %{!E:%{!M:%{!MM:\
	%{traditional|ftraditional|traditional-cpp:\
%eGNU Objective C no longer supports traditional compilation}\
	%{save-temps|no-integrated-cpp:cc1obj -E %(cpp_options) -o %{save-temps:%b.mi} %{!save-temps:%g.mi} \n\
           cc1obj -fpreprocessed -fno-section-anchors %{save-temps:%b.mi} %{!save-temps:%g.mi} %(cc1_options) %{print-objc-runtime-info} %{gen-decls}}\
	%{!save-temps:%{!no-integrated-cpp:\
	    cc1obj %(cpp_unique_options) -fno-section-anchors %(cc1_options) %{print-objc-runtime-info} %{gen-decls}}}\
        %{!fsyntax-only:%(invoke_as)}}}}", 0, 0, 0},
  {".mi", "@objc-cpp-output", 0, 0, 0},
  {"@objc-cpp-output",
     "%{!M:%{!MM:%{!E:cc1obj -fno-section-anchors -fpreprocessed %i %(cc1_options) %{print-objc-runtime-info} %{gen-decls}\
			     %{!fsyntax-only:%(invoke_as)}}}}   \
    %{fsection-anchors: %eGNU Objective C can't use -fsection-anchors} ", 0, 0, 0},
  {"@objective-c-header",
     "%{E|M|MM:cc1obj -E %{traditional|ftraditional|traditional-cpp:-traditional-cpp}\
          %(cpp_options) %(cpp_debug_options)}\
        %{fsection-anchors: %eGNU Objective C can't use -fsection-anchors} \
      %{!E:%{!M:%{!MM:\
	%{traditional|ftraditional|traditional-cpp:\
%eGNU Objective C no longer supports traditional compilation}\
	%{save-temps|no-integrated-cpp:cc1obj -E %(cpp_options) -o %{save-temps:%b.mi} %{!save-temps:%g.mi} \n\
	    cc1obj -fpreprocessed %b.mi %(cc1_options) -fno-section-anchors %{print-objc-runtime-info} %{gen-decls}\
                        -o %g.s %{!o*:--output-pch=%i.gch}\
                        %W{o*:--output-pch=%*}%V}\
        %{fsection-anchors: %eGNU Objective C can't use -fsection-anchors} \
	%{!save-temps:%{!no-integrated-cpp:\
	    cc1obj %(cpp_unique_options) -fno-section-anchors %(cc1_options) %{print-objc-runtime-info} %{gen-decls}\
                        -o %g.s %{!o*:--output-pch=%i.gch}\
                        %W{o*:--output-pch=%*}%V}}}}}", 0, 0, 0},