// Function: FUN_1404b55ec
// Addr: 1404b55ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5610) overlaps instruction at (ram,0x0001404b560e)
    */

void FUN_1404b55ec(char param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  undefined7 uVar8;
  byte bVar9;
  byte *unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  uint *puVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(unaff_RSI & 0xffffffff);
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  bVar4 = ((char)pcVar7 - *pcVar7) - (0x4ffff39b < in_EAX);
  puVar6 = (uint *)CONCAT71(uVar8,bVar4);
  param_2 = param_2 ^ *(uint *)(unaff_RDI + 0x54fc001a);
  *param_4 = *param_4;
  *(char *)(ulonglong)param_2 = *(char *)(ulonglong)param_2 + bVar4;
  *(byte *)puVar6 = (byte)*puVar6 + bVar4;
  if ((byte)*puVar6 == 0) {
    *puVar6 = *puVar6 & (uint)puVar6;
    uVar3 = *puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    bRam192100007002c004 = (-0x6a - *(char *)CONCAT71(uVar8,0x96)) - CARRY1((byte)uVar3,bVar4);
  }
  else {
    pbVar1 = (byte *)((longlong)puVar6 + 0x33001a96);
    bVar2 = *pbVar1;
    bVar9 = (byte)(param_2 >> 8);
    *pbVar1 = *pbVar1 + bVar9;
    pcVar7 = (char *)(unaff_RDI & 0xffffffff);
    cVar5 = ((char)pcVar7 - *pcVar7) - CARRY1(bVar2,bVar9);
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar5);
    *param_4 = *param_4 + -8;
    *pcVar7 = *pcVar7 + cVar5;
    pbVar1 = (byte *)(pcVar7 + 0x33001a96);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    bRam192100007002c004 = (bVar4 - (byte)*puVar6) - CARRY1(bVar2,bVar9);
  }
  *param_4 = *param_4 + bRam192100007002c004;
  *unaff_RBX = *unaff_RBX | bRam192100007002c004;
  *(char *)CONCAT71(uVar8,bRam192100007002c004) =
       *(char *)CONCAT71(uVar8,bRam192100007002c004) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

