// Function: FUN_1404ce4e8
// Addr: 1404ce4e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce4e8(undefined8 param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined1 uVar4;
  char cVar5;
  undefined6 uVar6;
  byte bVar7;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcVar3;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar4 = (undefined1)param_1;
  cVar5 = *unaff_RSI + '\x04' + (char)in_RAX;
  cVar2 = (char)in_RAX + *param_2;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  bVar1 = *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,uVar4));
  bVar7 = (byte)param_2;
  *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,uVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,uVar4)) + bVar7;
  *unaff_RDI = *unaff_RDI + cVar2 + CARRY1(bVar1,bVar7);
  *pcVar3 = *pcVar3 + bVar7;
  *(int *)((longlong)pcVar3 * 2) = *(int *)((longlong)pcVar3 * 2) + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

