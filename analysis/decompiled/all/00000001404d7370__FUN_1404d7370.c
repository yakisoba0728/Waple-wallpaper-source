// Function: FUN_1404d7370
// Addr: 1404d7370
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7370(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *in_RAX;
  char cVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char cVar4;
  char cVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  if (!SCARRY1((char)uVar2,cVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  cVar4 = cVar5 + unaff_BL;
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,cVar1));
  if (SCARRY1(cVar5,unaff_BL)) {
    *param_1 = *param_1 + cVar4;
    uVar2 = (uint)puVar3 | 0x740d0004;
    *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2;
    uVar2 = uVar2 + 0x70000f34;
    *(char *)(unaff_RBP + 0x4000378d) = *(char *)(unaff_RBP + 0x4000378d) + (char)uVar2;
    *(int *)CONCAT71(unaff_00000019,unaff_BL) =
         *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 & uVar2;
    param_1[param_2] = param_1[param_2] + cVar6;
    param_1[unaff_RDI] = param_1[unaff_RDI] + cVar6;
    *(char *)((ulonglong)uVar2 - 0x73) = *(char *)((ulonglong)uVar2 - 0x73) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar3 = *puVar3 & (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

