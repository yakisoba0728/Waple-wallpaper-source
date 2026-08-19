// Function: FUN_1404c0e00
// Addr: 1404c0e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0e00(char *param_1,char *param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char cVar6;
  undefined6 uVar7;
  char unaff_R14B;
  char unaff_R15B;
  byte *pbVar4;
  char *pcVar5;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)param_2;
  bVar2 = cRam010028b39a004221 + *param_1;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *param_2 = *param_2 + bVar2;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  *(uint *)(pbVar4 + (longlong)param_1) =
       (*(int *)(pbVar4 + (longlong)param_1) - (uint)pbVar4) - (uint)CARRY1(bVar1,bVar2);
  param_2[(longlong)pbVar4 * 2] = param_2[(longlong)pbVar4 * 2] + bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  pbVar4[0xd] = pbVar4[0xd] + cVar6;
  pbVar4[0x5d] = pbVar4[0x5d] + unaff_R15B;
  uVar3 = (uint)pbVar4 | 0xd60004c;
  pcVar5 = (char *)(ulonglong)uVar3;
  pcVar5[0xd] = pcVar5[0xd] + unaff_R14B;
  pbVar4 = (byte *)(pcVar5 + (longlong)param_1);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + param_3;
  *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) + (char)uVar3 + CARRY1(bVar1,param_3);
  *pcVar5 = *pcVar5 + (char)uVar3;
  bVar1 = *(byte *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6));
  *(byte *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) + param_3;
  *(uint *)(pcVar5 + 0x4221c0) = *(int *)(pcVar5 + 0x4221c0) + uVar3 + (uint)CARRY1(bVar1,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

