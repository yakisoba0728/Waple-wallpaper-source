// Function: FUN_1404b3fc4
// Addr: 1404b3fc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3fc4(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  char cVar4;
  char *in_RAX;
  char *pcVar5;
  char cVar7;
  byte bVar8;
  char cVar9;
  byte unaff_BL;
  byte *unaff_RDI;
  undefined7 uVar6;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  *(byte *)(param_2 + -0x4da0ffe8) =
       *(byte *)(param_2 + -0x4da0ffe8) ^ (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX - (char)in_RAX;
  cVar4 = cRam3000000021004a1d;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cRam3000000021004a1d);
  pbVar1 = unaff_RDI + -0x4e;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  *pcVar5 = (*pcVar5 - cVar4) - CARRY1(bVar2,unaff_BL);
  cVar4 = cRam0500020521004a1d;
  if (*pcVar5 != '\0') {
    cVar4 = cRam0500020521004a1d * '\x02';
    cVar7 = cVar7 + cVar9;
  }
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  pcVar5[0x21004a2b] = pcVar5[0x21004a2b] + cVar9;
  *pcVar5 = *pcVar5 + cVar4;
  cVar4 = cVar4 * '\x02';
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  bVar8 = cVar7 + cVar9;
  pcVar5[0x1004a2b] = pcVar5[0x1004a2b] + cVar9;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar8;
  cVar7 = *pcVar5;
  cVar9 = *pcVar5;
  *pcVar5 = cVar9 + cVar4 + CARRY1(bVar2,bVar8);
  sysenter();
  uVar3 = TaskRegister();
  *(undefined2 *)unaff_RDI = uVar3;
  if (SCARRY1(cVar7,cVar4) == SCARRY1(cVar9 + cVar4,CARRY1(bVar2,bVar8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

