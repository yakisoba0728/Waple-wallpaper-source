// Function: FUN_1404b1184
// Addr: 1404b1184
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1184(char *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar5;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar4;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RSI;
  uVar2 = in_EAX + 0x15b04e00 + (uint)(in_EAX < *(uint *)(unaff_RDI + 1));
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[param_2 + 0x4b] = pcVar4[param_2 + 0x4b] + cVar6;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *pcVar4 = *pcVar4 + (char)uVar2;
  *(char *)(param_2 + -0x5bffea51) = *(char *)(param_2 + -0x5bffea51) + unaff_BL;
  uVar2 = uVar2 + 0x4b105800 + (uint)(uVar2 < *(uint *)(unaff_RDI + 5));
  pcVar4 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *pcVar4 = *pcVar4 + (char)uVar2;
  *pcVar4 = *pcVar4 + (char)uVar2;
  uVar2 = uVar2 + 0x15af9a00 + (uint)(uVar2 < *(uint *)(unaff_RDI + 9));
  *(char *)((ulonglong)uVar2 + 0x21004afc) = *(char *)((ulonglong)uVar2 + 0x21004afc) + (char)uVar2;
  pcVar4 = (char *)((ulonglong)(uVar2 + 0x64050002) + 2);
  *pcVar4 = *pcVar4 + cVar6;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,0x15)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,0x15)) + unaff_SPL;
  uVar3 = uVar2 + 0x280a0004 | 0x15b1eb00;
  bVar1 = (byte)(uVar2 + 0x280a0004);
  bVar5 = (byte)(uVar3 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL + cVar6) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL + cVar6) + '\x15' + CARRY1(bVar1,bVar5);
  uRam00000001145011e0 = uRam00000001145011e0 & CONCAT31((int3)(uVar3 >> 8),bVar1 + bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

