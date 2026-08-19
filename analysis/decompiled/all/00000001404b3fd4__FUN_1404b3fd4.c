// Function: FUN_1404b3fd4
// Addr: 1404b3fd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3fd4(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  char *in_RAX;
  char *pcVar4;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte *unaff_RDI;
  undefined7 uVar5;
  
  cVar8 = (char)((ulonglong)param_1 >> 8);
  cVar6 = (char)param_1;
  *(byte *)(param_2 + -0x4da0ffe8) =
       *(byte *)(param_2 + -0x4da0ffe8) ^ (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX - (char)in_RAX;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = cRam0500020521004a1d;
  if (*in_RAX != '\0') {
    cVar3 = cRam0500020521004a1d * '\x02';
    cVar6 = cVar6 + cVar8;
  }
  pcVar4 = (char *)CONCAT71(uVar5,cVar3);
  pcVar4[0x21004a2b] = pcVar4[0x21004a2b] + cVar8;
  *pcVar4 = *pcVar4 + cVar3;
  cVar3 = cVar3 * '\x02';
  pcVar4 = (char *)CONCAT71(uVar5,cVar3);
  bVar7 = cVar6 + cVar8;
  pcVar4[0x1004a2b] = pcVar4[0x1004a2b] + cVar8;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar7;
  cVar6 = *pcVar4;
  cVar8 = *pcVar4;
  *pcVar4 = cVar8 + cVar3 + CARRY1(bVar1,bVar7);
  sysenter();
  uVar2 = TaskRegister();
  *(undefined2 *)unaff_RDI = uVar2;
  if (SCARRY1(cVar6,cVar3) == SCARRY1(cVar8 + cVar3,CARRY1(bVar1,bVar7))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

