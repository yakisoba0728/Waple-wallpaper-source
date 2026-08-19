// Function: FUN_14022f960
// Addr: 14022f960
// Size: 46 bytes


/* WARNING: Removing unreachable block (ram,0x00014022f9b3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022f960(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fStack_18;
  undefined8 uStack_14;
  undefined1 uStack_c;
  
  *(char *)(param_2 + 0x3f8) = (char)param_1[0x7f] + '\x01';
  *(undefined1 *)(param_2 + 0x3f7) = *(undefined1 *)((longlong)param_1 + 0x3f7);
  if (param_3 != '\0') {
    lVar1 = param_1[1];
    fStack_18 = *(float *)(lVar1 + 0x85c);
    uVar2 = *(undefined8 *)(lVar1 + 0x860);
    if (((fStack_18 < 0.0) ||
        ((((float)((uint)(*(float *)(param_2 + 0x34) - fStack_18) & _DAT_140493090) < _UNK_1404926e4
          && (uStack_14._0_4_ = (float)uVar2,
             (float)((uint)(*(float *)(param_2 + 0x38) - (float)uStack_14) & _DAT_140493090) <
             _UNK_1404926e4)) &&
         (uStack_14._4_4_ = (float)((ulonglong)uVar2 >> 0x20),
         (float)((uint)(*(float *)(param_2 + 0x3c) - uStack_14._4_4_) & _DAT_140493090) <
         _UNK_1404926e4)))) ||
       (((*(byte *)(param_2 + 0x20) & 8) != 0 ||
        (uStack_c = 1, (*(byte *)((longlong)param_1 + 0x3f7) & 2) == 0)))) {
      uStack_c = 0;
    }
    uStack_14 = uVar2;
    FUN_1401d1670(*param_1 + 0x1a60,param_2 + 0x18,lVar1 + 0x778,&fStack_18,param_2);
  }
  return;
}

