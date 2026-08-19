// Function: FUN_1404c972c
// Addr: 1404c972c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c972f) overlaps instruction at (ram,0x0001404c972e)
    */

void FUN_1404c972c(char *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  int unaff_ESI;
  uint *puVar5;
  char unaff_R12B;
  
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '4');
  uVar2 = (uint)puVar4 | *puVar4;
  puVar4 = (uint *)(ulonglong)uVar2;
  while (*puVar4 = *puVar4 ^ uVar2, *puVar4 == 0) {
    *(char *)((longlong)puVar4 + -7) = *(char *)((longlong)puVar4 + -7) + (char)param_2;
  }
  *puVar4 = *puVar4 ^ uVar2;
  puVar5 = (uint *)(ulonglong)uVar2;
  *param_1 = *param_1 + unaff_R12B;
  uVar3 = unaff_ESI + 0x64050002U | 0x31f97600;
  cVar1 = (char)(unaff_ESI + 0x64050002U) + (char)(uVar3 >> 8);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 ^ uVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar2;
  do {
    *(char *)((longlong)puVar4 + -7) =
         *(char *)((longlong)puVar4 + -7) + (char)((ulonglong)param_2 >> 8);
    *puVar5 = *puVar5 ^ uVar2;
    param_1 = param_1 + -1;
  } while (param_1 != (char *)0x0 && *puVar5 != 0);
  *puVar5 = *puVar5 ^ uVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar4 = (char)*puVar4 + cVar1;
  do {
    *(char *)((longlong)puVar4 + -7) = *(char *)((longlong)puVar4 + -7) + (char)param_2;
    *puVar4 = *puVar4 ^ uVar3;
  } while (*puVar4 == 0);
  *puVar4 = *puVar4 ^ uVar3;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

