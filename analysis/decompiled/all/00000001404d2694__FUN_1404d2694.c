// Function: FUN_1404d2694
// Addr: 1404d2694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2694(int *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  piVar1 = (int *)CONCAT71((uint7)(uint3)(((uint)&stack0x00000000 & 0x4a01004d) + 0x744a00 >> 8),2);
  *(char *)(param_2 + (longlong)piVar1) = *(char *)(param_2 + (longlong)piVar1) + '\x02';
  *(char *)piVar1 = (char)*piVar1 + '\x02';
  *param_1 = *param_1 + (int)param_1;
  *piVar1 = *piVar1 + (uint)piVar1;
  *(uint *)(param_2 + 0xd010000) = *(uint *)(param_2 + 0xd010000) | (uint)piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

