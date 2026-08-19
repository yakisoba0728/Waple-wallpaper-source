// Function: FUN_1404c92f0
// Addr: 1404c92f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c92f0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 uVar6;
  char cVar7;
  undefined6 uVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined7 uVar5;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined1)param_2;
  unaff_RSI[param_1 + 0x31b52100] = unaff_RSI[param_1 + 0x31b52100];
  *unaff_RDI = *unaff_RSI;
  pbVar4 = (byte *)func_0x0001584d9347();
  uVar5 = (undefined7)((ulonglong)pbVar4 >> 8);
  bVar3 = (byte)pbVar4 | *pbVar4;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT62(uVar8,CONCAT11(cVar7,uVar6)));
  *pcVar1 = *pcVar1 - cVar7;
  bVar2 = *(byte *)CONCAT71(uVar5,bVar3);
  *(byte *)CONCAT71(uVar5,bVar3) = *(char *)CONCAT71(uVar5,bVar3) + unaff_BL;
  if (!CARRY1(bVar2,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

