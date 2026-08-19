// Function: FUN_1404ad3d8
// Addr: 1404ad3d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad3d8(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int unaff_ESP;
  undefined4 unaff_00000024;
  byte in_CF;
  
  uVar2 = in_EAX + unaff_ESP + (uint)in_CF;
  uVar2 = uVar2 - *(int *)(ulonglong)uVar2;
  puVar3 = (uint *)(ulonglong)uVar2;
  *(char *)CONCAT44(unaff_00000024,unaff_ESP) =
       *(char *)CONCAT44(unaff_00000024,unaff_ESP) + (char)uVar2;
  uVar1 = *puVar3;
  *puVar3 = *puVar3 - uVar2;
  piVar4 = (int *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xb0);
  *piVar4 = *piVar4 + (int)piVar4 + (uint)(uVar1 < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

