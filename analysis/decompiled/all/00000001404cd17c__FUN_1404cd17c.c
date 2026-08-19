// Function: FUN_1404cd17c
// Addr: 1404cd17c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd17c(byte *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  byte unaff_BL;
  char unaff_SPL;
  char *pcVar4;
  
  param_1[-0x561affcb] = 0;
  in_RAX[0x15] = in_RAX[0x15] + (byte)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar3 = ((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02') ^ 0x4a155000) +
          *(int *)param_1 + (uint)CARRY1(bVar2,unaff_BL);
  bVar2 = (byte)uVar3;
  *param_2 = *param_2 + bVar2;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + bVar2;
  bVar2 = bVar2 & (byte)param_2;
  uVar1 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  pcVar4 = (char *)(ulonglong)uVar1;
  *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + bVar2;
  uRam000000017451d1b0 = uRam000000017451d1b0 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

