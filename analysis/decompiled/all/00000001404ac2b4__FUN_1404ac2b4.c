// Function: FUN_1404ac2b4
// Addr: 1404ac2b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac2b4(char *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar2 = (char *)(in_RAX + 0x1c + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar2 = *pcVar2 + (char)in_RAX;
  pbVar1 = (byte *)(in_RAX + (longlong)param_1 * 4);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar4 = ((int)in_RAX + -0x1e783400) - (uint)CARRY1(bVar3,unaff_BH);
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + -8;
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

