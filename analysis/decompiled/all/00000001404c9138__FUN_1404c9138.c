// Function: FUN_1404c9138
// Addr: 1404c9138
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9156) overlaps instruction at (ram,0x0001404c9154)
    */

void FUN_1404c9138(char *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  byte *in_RAX;
  byte *pbVar6;
  undefined1 *unaff_RBX;
  longlong unaff_RSI;
  char acStack_8 [8];
  char *pcVar4;
  
  unaff_RBX[(longlong)param_1] = unaff_RBX[(longlong)param_1] + (char)param_2;
  *param_2 = *param_2 ^ (byte)in_RAX;
  bVar1 = *in_RAX;
  acStack_8[0] = '\x02';
  acStack_8[1] = '2';
  acStack_8[2] = '\0';
  acStack_8[3] = '\x14';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  *param_1 = *param_1 + param_3;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ bVar1) | uRam00000001478e9c4f
  ;
  pcVar4 = (char *)(ulonglong)uVar3;
  pbVar6 = (byte *)(param_1 + -1);
  cVar2 = (char)uVar3;
  if (pbVar6 == (byte *)0x0 || uVar3 == 0) {
    *unaff_RBX = *unaff_RBX;
    bVar5 = (char)(uVar3 >> 8) + *pcVar4;
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar5;
    uVar3 = CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),CONCAT11(bVar5,cVar2)) >> 8),
                     cVar2 + '\x06' + CARRY1(bVar1,bVar5));
  }
  else {
    *pcVar4 = *pcVar4 + cVar2;
    *(uint *)(pcVar4 + unaff_RSI) = *(uint *)(pcVar4 + unaff_RSI) & (uint)param_2;
  }
  acStack_8[(longlong)param_2 * 2] = acStack_8[(longlong)param_2 * 2] + (char)param_2;
  uVar3 = (uVar3 | 0xf4) + 0xf0000b34;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 ^ uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

