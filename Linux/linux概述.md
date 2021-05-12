# linux概述

* 起源

  * 一个芬兰学生在**Minix**的基础上开发了一个操作系统并取名Linux.

* Unix

  * 起初是**AT&T贝尔实验室**的一个研究项目(无偿提供给各大学，但获取源代码需要交费)，后被伯克利分校的计算机系统研究小组(GSRG)重新包装后发布的了自己Unix版本--伯克利Unix(Berkeley Unix),随着商业的发展,AT&T的许可证费用越来越高,伯克利决定除去AT&T的代码，这个工程持续了一年多。**到1989年6月,一个没有AT&TUnix代码的BSD版本出现了。这是第一套由Berkeley发布的自由可再发行(freely-redistributable)的代码,只要承认这是Berkeley的劳动成果，任何人都可以以任意方式使用这些源代码。1995年6月,4.4BSD-lite发行.GSRG以你为失去资金支持二被迫解散.目前大多数的BSDUnix版本都是从4.4BSD-lite发展过来的.**

  ## linux是针对Unix的重现

  # 常见开源协议

  * BSD
  * Apache
  * Gpl
  * MIT
  * LGPL

  ## Root

  * 拥有最高权限的一个用户(想干什么都行)
  * sudo -s 将自己提升为root用户 可用exit回到先前的用户状态