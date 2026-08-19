// Function: FUN_14049f124
// Addr: 14049f124
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f124(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int *in_RAX;
  int *piVar2;
  char cVar3;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  bool in_OF;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
    *in_RAX = *in_RAX + (int)in_RAX;
    bRam010049f034000156 = (byte)in_RAX;
    *unaff_RSI = *unaff_RSI + bRam010049f034000156;
    *(byte *)in_RAX = (char)*in_RAX + bRam010049f034000156;
    bRam010049f034000156 = bRam010049f034000156 | *(byte *)(in_FS_OFFSET + (longlong)in_RAX);
    piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam010049f034000156);
    *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
    *(char *)((longlong)piVar2 + param_1) = *(char *)((longlong)piVar2 + param_1) + cVar3;
    *(char *)((longlong)piVar2 + 0x56) = *(char *)((longlong)piVar2 + 0x56) + cVar3;
    *piVar2 = *piVar2 + (int)piVar2;
    bRam210049f034000156 = bRam010049f034000156;
    *(byte *)piVar2 = (char)*piVar2 + bRam010049f034000156;
    *(char *)((longlong)piVar2 + 0x56) = *(char *)((longlong)piVar2 + 0x56) + cVar3;
    *piVar2 = *piVar2 + (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (int)in_RAX + 0x90000834;
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1;
  return;
}

