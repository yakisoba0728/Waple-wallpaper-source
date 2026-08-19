// Function: FUN_1404b1964
// Addr: 1404b1964
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1964(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  byte bVar5;
  char *unaff_RBX;
  undefined1 *unaff_RDI;
  char acStackX_16 [18];
  
  bVar5 = (byte)param_1;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) + 0x161c5000;
  acStackX_16[(longlong)unaff_RBX] =
       acStackX_16[(longlong)unaff_RBX] + (char)((ulonglong)param_1 >> 8);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4 + 'T');
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  pbVar1 = (byte *)(param_1 + -0x77ffe9e4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  *unaff_RBX = (*unaff_RBX - bVar5) - CARRY1(bVar2,bVar5);
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

