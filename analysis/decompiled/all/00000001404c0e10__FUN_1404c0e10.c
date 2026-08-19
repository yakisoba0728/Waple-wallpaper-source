// Function: FUN_1404c0e10
// Addr: 1404c0e10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0e10(longlong param_1,longlong param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  char cVar5;
  undefined6 uVar6;
  char unaff_R14B;
  char unaff_R15B;
  byte in_CF;
  char *pcVar4;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  *(uint *)(in_RAX + param_1) = (*(int *)(in_RAX + param_1) - (uint)in_RAX) - (uint)in_CF;
  pcVar4 = (char *)(param_2 + (longlong)in_RAX * 2);
  *pcVar4 = *pcVar4 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[0xd] = in_RAX[0xd] + cVar5;
  in_RAX[0x5d] = in_RAX[0x5d] + unaff_R15B;
  uVar3 = (uint)in_RAX | 0xd60004c;
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[0xd] = pcVar4[0xd] + unaff_R14B;
  pbVar1 = (byte *)(pcVar4 + param_1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_3;
  *(char *)CONCAT62(uVar6,CONCAT11(0x2b,cVar5)) =
       *(char *)CONCAT62(uVar6,CONCAT11(0x2b,cVar5)) + (char)uVar3 + CARRY1(bVar2,param_3);
  *pcVar4 = *pcVar4 + (char)uVar3;
  bVar2 = *(byte *)CONCAT62(uVar6,CONCAT11(0x2b,cVar5));
  *(byte *)CONCAT62(uVar6,CONCAT11(0x2b,cVar5)) =
       *(char *)CONCAT62(uVar6,CONCAT11(0x2b,cVar5)) + param_3;
  *(uint *)(pcVar4 + 0x4221c0) = *(int *)(pcVar4 + 0x4221c0) + uVar3 + (uint)CARRY1(bVar2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

