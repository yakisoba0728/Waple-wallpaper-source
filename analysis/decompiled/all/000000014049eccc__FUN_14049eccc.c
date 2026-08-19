// Function: FUN_14049eccc
// Addr: 14049eccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eccc(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *in_RAX;
  char cVar5;
  char cVar8;
  byte *pbVar6;
  byte unaff_BL;
  char unaff_SPL;
  char in_ZF;
  byte *pbVar7;
  
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 == (byte *)0x0 || in_ZF == '\0') {
    *in_RAX = *in_RAX + (int)in_RAX;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    bVar1 = (char)in_RAX * '\x02';
    *pbVar6 = *pbVar6 & bVar1;
    bVar4 = (byte)((ulonglong)in_RAX >> 8);
    cVar5 = (char)pbVar6 + bVar4;
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),cVar5);
    *pbVar7 = *pbVar7 & bVar1;
    iVar2 = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                          CONCAT11(bVar4 + unaff_BL,bVar1)) >> 8),
                          (bVar1 - 0x1c) + CARRY1(bVar4,unaff_BL)) + 0xdc40500;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -1);
    cVar8 = (char)((ulonglong)pbVar6 >> 8);
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar8;
    uVar3 = uVar3 + 0x13c7ffff;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + -1);
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar8;
    uVar3 = uVar3 + 0x13c7ffff;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)((ulonglong)uVar3 * 2) = *(char *)((ulonglong)uVar3 * 2) + cVar5;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     CONCAT11(((char)(uVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02',
                              (char)uVar3)) + 0x6d40000;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

