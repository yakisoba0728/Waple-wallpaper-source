// Function: FUN_1404a8abc
// Addr: 1404a8abc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8abc(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  undefined7 uVar4;
  uint *puVar3;
  char *unaff_RSI;
  
  uVar2 = *in_RAX;
  *in_RAX = *in_RAX + (uint)in_RAX;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + -0x3c + CARRY4(uVar2,(uint)in_RAX);
  puVar3 = (uint *)(CONCAT71(uVar4,cVar1 + *(char *)CONCAT71(uVar4,cVar1)) | 100);
  *puVar3 = *puVar3 | (uint)puVar3;
  uVar2 = (uint)puVar3 + 0x734;
  puVar3 = (uint *)(ulonglong)uVar2;
  if (param_1 == 1 || uVar2 == 0) {
    *unaff_RSI = *unaff_RSI + (char)uVar2;
    if (param_1 + -2 != 0 && *unaff_RSI != '\0') {
      halt_baddata();
    }
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar2 >> 8) + (char)param_2,(char)uVar2)
                    );
    puVar3 = (uint *)(ulonglong)uVar2;
    *param_2 = (int)(param_1 + -2);
    *puVar3 = *puVar3 & uVar2;
  }
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

