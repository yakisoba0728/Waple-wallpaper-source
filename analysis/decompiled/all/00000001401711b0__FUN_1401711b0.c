// Function: FUN_1401711b0
// Addr: 1401711b0
// Size: 201 bytes


/* WARNING: Possible PIC construction at 0x000140171386: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014017138b) */

void FUN_1401711b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  *param_1 = &PTR_UNWIND_INFO_140174a5e_CountOfUnwindCodes_14048e058;
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 8))();
  }
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x160))
              (*(longlong **)(param_1[1] + 0x158),*(undefined4 *)param_1[0x28]);
    lVar2 = param_1[0x28];
    if (lVar2 != 0) {
      FUN_1401796a0(lVar2 + 0x218);
      FUN_1400c1600(lVar2 + 0x160);
      FUN_1400c1600(lVar2 + 0x108);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar2 + 0xe8);
    }
    param_1[0x28] = 0;
    unaff_RDI = 0;
  }
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x128))
              (*(longlong **)(param_1[1] + 0x158),*(undefined4 *)param_1[0x29]);
    unaff_RDI = param_1[0x29];
    if (unaff_RDI != 0) {
      func_0x00014000dab0(unaff_RDI + 0xe0);
      func_0x00014000db20(unaff_RDI + 0xd0);
      func_0x0001401795a0(unaff_RDI + 0x58);
      func_0x00014028b040(unaff_RDI,0x108);
    }
    param_1[0x29] = 0;
  }
  func_0x00014000dab0(param_1 + 0x2d);
  func_0x0001400d21f0(param_1 + 0x2b);
  func_0x00014000dab0(param_1 + 0x20);
  func_0x000140049410(param_1 + 0x1e);
  func_0x000140049410(param_1 + 0x1b);
  func_0x00014000dab0(param_1 + 0x16);
  FUN_140179520(param_1 + 0x14);
  func_0x00014000dab0(param_1 + 0x10);
  func_0x00014000dab0(param_1 + 0xd);
  plVar1 = param_1 + 7;
  switch(*(uint *)(param_1 + 8) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(param_1 + 8) >> 8 & 1) != 0) {
      func_0x0001402bf8e0(*plVar1);
    }
    break;
  case 6:
  case 7:
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      func_0x000140088f10(lVar2);
      func_0x00014028b040(lVar2,0x10);
    }
    break;
  default:
    func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434,
                        param_4,param_1,&UNK_14017138b,unaff_RDI);
  }
  *plVar1 = 0;
  if (param_1[9] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1[9] + 0x40);
}

