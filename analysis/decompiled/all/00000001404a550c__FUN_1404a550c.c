// Function: FUN_1404a550c
// Addr: 1404a550c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5522) overlaps instruction at (ram,0x0001404a5521)
    */

void FUN_1404a550c(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  char cVar7;
  undefined6 uVar8;
  int unaff_ESI;
  int *piVar4;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + 0x60;
  piVar4 = (int *)CONCAT71(uVar6,bVar3);
  iVar2 = *piVar4;
  cVar7 = (char)param_2 + (char)*piVar4;
  *param_1 = *param_1 + bVar3;
  pcVar5 = (char *)CONCAT71(uVar6,bVar3 | *(byte *)((longlong)piVar4 * 2));
  bVar3 = (byte)((ulonglong)param_2 >> 8) | param_1[(uint)(unaff_ESI + iVar2)];
  cVar1 = *(char *)CONCAT62(uVar8,CONCAT11(bVar3,cVar7));
  *(char *)CONCAT62(uVar8,CONCAT11(bVar3,cVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar3,cVar7)) + (char)param_1;
  if (SCARRY1(cVar1,(char)param_1)) {
    pcVar5 = (char *)(ulonglong)((uint)pcVar5 | 0x8af42b00);
  }
  *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

