// Function: FUN_1404b5604
// Addr: 1404b5604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5604(char param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  byte bVar6;
  byte *unaff_RBX;
  ulonglong unaff_RDI;
  char in_CF;
  char *pcVar4;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (-0x6a - *(char *)CONCAT71(uVar5,0x96)) - in_CF;
  pcVar4 = (char *)CONCAT71(uVar5,cVar3);
  bVar6 = (byte)((uint)param_2 >> 8) ^ (byte)((uint)*(undefined4 *)(unaff_RDI + 0x54fc001a) >> 8);
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + cVar3;
  pbVar1 = (byte *)(pcVar4 + 0x33001a96);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  pcVar4 = (char *)(unaff_RDI & 0xffffffff);
  bRam192100007002c004 = ((char)pcVar4 - *pcVar4) - CARRY1(bVar2,bVar6);
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pcVar4 >> 8),bRam192100007002c004);
  *param_4 = *param_4 + bRam192100007002c004;
  *unaff_RBX = *unaff_RBX | bRam192100007002c004;
  *pcVar4 = *pcVar4 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

