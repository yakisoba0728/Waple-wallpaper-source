// Function: FUN_14003b8f0
// Addr: 14003b8f0
// Size: 127 bytes


undefined8 FUN_14003b8f0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 local_28 [4];
  uint uStack_24;
  uint local_18;
  int local_14;
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar1 = FUN_140290300(param_1,local_28,3,0xffffffff);
  if (uVar1 == 0) {
    if ((local_18 >> 10 & 1) != 0) {
      if (local_14 == -0x5ffffff4) {
        cVar2 = '\x04';
        goto UNWIND_INFO_14003b970_UnwindCodes_9__UnwindOpCode;
      }
      if (local_14 == -0x5ffffffd) {
        cVar2 = '\n';
        goto UNWIND_INFO_14003b970_UnwindCodes_9__UnwindOpCode;
      }
    }
    cVar2 = ((local_18 & 0x10) != 0) + '\x02';
    goto UNWIND_INFO_14003b970_UnwindCodes_9__UnwindOpCode;
  }
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar3 = uVar1 == 0x35;
UNWIND_INFO_14003b970_UnwindCodes_4__OffsetInProlog:
      if (!bVar3) {
        cVar2 = '\0';
        goto UNWIND_INFO_14003b970_UnwindCodes_9__UnwindOpCode;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar3 = uVar1 == 0x10b;
    goto UNWIND_INFO_14003b970_UnwindCodes_4__OffsetInProlog;
  }
  cVar2 = '\x01';
UNWIND_INFO_14003b970_UnwindCodes_9__UnwindOpCode:
  param_2[1] = uStack_24;
  *(undefined ***)(param_2 + 2) = &PTR_DAT_1404df600;
  *param_2 = uVar1;
  return CONCAT71(0x1404df6,cVar2 == '\x03');
}

