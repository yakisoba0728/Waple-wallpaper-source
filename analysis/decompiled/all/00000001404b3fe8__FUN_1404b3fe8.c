// Function: FUN_1404b3fe8
// Addr: 1404b3fe8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3fe8(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  char *in_RAX;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  byte *unaff_RDI;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *(undefined1 *)(param_2 + -0x4d16ffe8) = 0;
  in_RAX[0x21004a2b] = in_RAX[0x21004a2b] + cVar7;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar4 = (char)in_RAX * '\x02';
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  bVar6 = (char)param_1 + cVar7;
  pcVar5[0x1004a2b] = pcVar5[0x1004a2b] + cVar7;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar6;
  cVar7 = *pcVar5;
  cVar2 = *pcVar5;
  *pcVar5 = cVar2 + cVar4 + CARRY1(bVar1,bVar6);
  sysenter();
  uVar3 = TaskRegister();
  *(undefined2 *)unaff_RDI = uVar3;
  if (SCARRY1(cVar7,cVar4) == SCARRY1(cVar2 + cVar4,CARRY1(bVar1,bVar6))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

