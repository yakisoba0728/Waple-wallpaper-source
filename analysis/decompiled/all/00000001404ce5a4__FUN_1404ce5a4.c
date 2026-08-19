// Function: FUN_1404ce5a4
// Addr: 1404ce5a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce5a4(undefined8 param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  char *unaff_retaddr;
  char *pcVar4;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)param_1 + unaff_BL;
  uVar1 = in(0x4c);
  *param_2 = *param_2 + cVar5;
  cVar6 = (char)((ulonglong)param_1 >> 8) + cVar5;
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + -0x3affd1fe;
  cVar2 = (char)iVar3 + *unaff_retaddr;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
  *pcVar4 = *pcVar4 + cVar2;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + (char)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

