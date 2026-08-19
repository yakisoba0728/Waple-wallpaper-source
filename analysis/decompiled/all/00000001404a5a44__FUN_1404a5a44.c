// Function: FUN_1404a5a44
// Addr: 1404a5a44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5a44(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar3;
  char *in_RAX;
  undefined7 uVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar2;
  
  uRam00000001a84f5a4c = uRam00000001a84f5a4c & (uint)in_RAX;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + *in_RAX;
  pbVar2 = (byte *)CONCAT71(uVar4,bVar1);
  pbVar2[-0x77ddfff8] = pbVar2[-0x77ddfff8] + (byte)param_1;
  *pbVar2 = *pbVar2 | bVar1;
  *param_4 = *param_4;
  *param_2 = *param_2 + bVar1;
  *pbVar2 = *pbVar2 + bVar1;
  *pbVar2 = *pbVar2 | bVar1;
  bVar5 = (byte)param_1 & pbVar2[-0x1057fff8];
  *param_4 = *param_4 + -8;
  *pbVar2 = *pbVar2 + bVar1;
  *pbVar2 = *pbVar2 + bVar1;
  *pbVar2 = bVar5;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + cVar3;
  *pbVar2 = bVar5;
  pbVar2[0x10049ef] = pbVar2[0x10049ef] + (char)((ulonglong)param_1 >> 8);
  bVar1 = bVar1 | bRam0000000146cc6483;
  pbVar2 = (byte *)CONCAT71(uVar4,bVar1);
  pcVar6 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),bVar5) + -1);
  if (pcVar6 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar2 = *pbVar2 ^ bVar1;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

