// Function: FUN_1404bd9cc
// Addr: 1404bd9cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd9cc(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  uint *puVar2;
  longlong unaff_RBP;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + 0x68;
  bVar1 = bVar1 | *(byte *)CONCAT71(uVar3,bVar1);
  puVar2 = (uint *)CONCAT71(uVar3,bVar1);
  *(undefined1 *)(unaff_RBP + 0x25) = *(undefined1 *)(unaff_RBP + 0x25);
  *puVar2 = *puVar2 & (uint)puVar2;
  *(byte *)puVar2 = (char)*puVar2 + bVar1;
  *(undefined1 *)(unaff_RBP + 0x25) = *(undefined1 *)(unaff_RBP + 0x25);
  *(int *)(unaff_RBP + -0x76affee) = *(int *)(unaff_RBP + -0x76affee) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

