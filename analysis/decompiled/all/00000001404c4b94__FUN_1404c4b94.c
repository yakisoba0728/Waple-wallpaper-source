// Function: FUN_1404c4b94
// Addr: 1404c4b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4b94(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint unaff_ESP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  uint uVar3;
  
  puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + param_2);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (uVar3 - unaff_ESP) - (uint)in_CF;
  *(int *)(param_2 + 0x12d21900) =
       (*(int *)(param_2 + 0x12d21900) - unaff_ESI) -
       (uint)(uVar2 < unaff_ESP || uVar3 - unaff_ESP < (uint)in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

