// Function: FUN_1404d38ec
// Addr: 1404d38ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d38ec(char param_1,uint *param_2)

{
  uint in_EAX;
  uint uVar1;
  uint unaff_ESP;
  longlong unaff_RDI;
  uint *puVar2;
  
  uRam00000001345238f4 = uRam00000001345238f4 & in_EAX;
  uVar1 = in_EAX + 0x3f22a900;
  puVar2 = (uint *)(ulonglong)uVar1;
  *(char *)(unaff_RDI + 0x8003f23) =
       *(char *)(unaff_RDI + 0x8003f23) + (char)((ulonglong)param_2 >> 8);
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  *(char *)puVar2 = (char)*puVar2 + param_1;
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  *param_2 = *param_2 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

