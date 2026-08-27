// Function: FUN_14022f890
// Addr: 14022f890
// Size: 252 bytes


/* WARNING: Removing unreachable block (ram,0x00014022f8e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022f890(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  *(char *)(param_2 + 0x3f8) = (char)param_1[0x7f] + '\x01';
  *(undefined1 *)(param_2 + 0x3f7) = *(undefined1 *)((longlong)param_1 + 0x3f7);
  if (param_3 != '\0') {
    lVar1 = param_1[1];
    local_18 = *(float *)(lVar1 + 0x85c);
    uVar2 = *(undefined8 *)(lVar1 + 0x860);
    if (((local_18 < 0.0) ||
        ((((float)((uint)(*(float *)(param_2 + 0x34) - local_18) & _DAT_140492fc0) < DAT_140492614
          && (local_14._0_4_ = (float)uVar2,
             (float)((uint)(*(float *)(param_2 + 0x38) - (float)local_14) & _DAT_140492fc0) <
             DAT_140492614)) &&
         (local_14._4_4_ = (float)((ulonglong)uVar2 >> 0x20),
         (float)((uint)(*(float *)(param_2 + 0x3c) - local_14._4_4_) & _DAT_140492fc0) <
         DAT_140492614)))) ||
       (((*(byte *)(param_2 + 0x20) & 8) != 0 ||
        (local_c = 1, (*(byte *)((longlong)param_1 + 0x3f7) & 2) == 0)))) {
      local_c = 0;
    }
    local_14 = uVar2;
    FUN_1401d15a0(*param_1 + 0x1a60,param_2 + 0x18,lVar1 + 0x778,&local_18,param_2);
  }
  return;
}

