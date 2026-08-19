// Function: FUN_1404bb5c8
// Addr: 1404bb5c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb5c8(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined8 in_RAX;
  byte bVar6;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  bool bVar7;
  uint *puVar5;
  
  bVar6 = (byte)param_1;
  bVar3 = (char)in_RAX + -0x78 + in_CF;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *(byte *)puVar5 = (byte)*puVar5 | bVar3;
  *(byte *)((longlong)puVar5 + 10) =
       *(byte *)((longlong)puVar5 + 10) | (byte)((ulonglong)param_1 >> 8);
  *(byte *)(puVar5 + 0x18) = (byte)puVar5[0x18] + (char)((ulonglong)param_2 >> 8);
  *puVar5 = *puVar5 & (uint)puVar5;
  if (*puVar5 == 0) {
    *puVar5 = *puVar5 & (uint)puVar5;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = *param_2 + bVar6;
  iRam000000014f9ab73f = iRam000000014f9ab73f + (int)param_2;
  unaff_RDI[-0x38] = unaff_RDI[-0x38] + bVar6;
  bVar7 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),unaff_BL);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (-1 < *(char *)CONCAT71(unaff_00000019,unaff_BL)) {
    bVar7 = CARRY1(*unaff_RDI,bVar6);
    *unaff_RDI = *unaff_RDI + bVar6;
  }
  cVar4 = cRam000000009ebd2703 + bVar7 + '3';
  uVar2 = CONCAT31(0x9ebd27,cVar4);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar4;
  *unaff_RSI = *unaff_RSI & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

