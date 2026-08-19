// Function: FUN_1404b0518
// Addr: 1404b0518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0518(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar4;
  undefined8 in_RAX;
  undefined6 uVar5;
  char cVar6;
  longlong unaff_RDI;
  byte *pbVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar1 = (byte)in_RAX;
  bVar4 = (char)((ulonglong)in_RAX >> 8) + cVar6;
  pbVar3 = (byte *)CONCAT62(uVar5,CONCAT11(bVar4,bVar1));
  *pbVar3 = *pbVar3 | bVar1;
  pbVar3 = (byte *)CONCAT62(uVar5,CONCAT11(bVar4 * '\x02',bVar1));
  *(uint *)pbVar3 = *(int *)pbVar3 + (int)pbVar3 + (uint)CARRY1(bVar4,bVar4);
  pbVar3[param_2] = pbVar3[param_2] + cVar6;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + bVar4 * '\x02';
  bVar1 = *pbVar3;
  *pbVar3 = (char)*pbVar3 >> 1;
  uVar2 = (int)pbVar3 + 0x15398700 + (uint)(bVar1 & 1);
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  pbVar3[(longlong)&stack0x00000000] = pbVar3[(longlong)&stack0x00000000] + bVar1;
  *param_4 = *param_4 + bVar1;
  *pbVar3 = *pbVar3 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

