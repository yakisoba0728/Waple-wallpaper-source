// Function: FUN_1404cadd8
// Addr: 1404cadd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cadd8(byte *param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *in_RAX;
  ulonglong uVar9;
  char *unaff_RBX;
  uint *unaff_RSI;
  byte unaff_R12B;
  longlong in_FS_OFFSET;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char unaff_retaddr;
  uint *puVar7;
  undefined4 *puVar8;
  
  if (in_ZF || in_OF != in_SF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
    uVar5 = in(6);
    puVar8 = (undefined4 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar5);
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    *(uint *)(in_FS_OFFSET + (longlong)puVar8) =
         *(uint *)(in_FS_OFFSET + (longlong)puVar8) | (uint)puVar8;
  }
  else {
    uVar6 = (uint)in_RAX ^ *in_RAX;
    puVar7 = (uint *)(ulonglong)uVar6;
    (&stack0x00002100)[(longlong)param_1 * 2] = (byte)(&stack0x00002100)[(longlong)param_1 * 2] >> 1
    ;
    *(char *)puVar7 = (char)*puVar7 + param_2;
    uVar6 = uVar6 ^ *puVar7;
    puVar8 = (undefined4 *)(ulonglong)uVar6;
    if (0 < (int)uVar6) {
      uVar3 = *puVar8;
      (&stack0x09130108)[(longlong)param_1 * 2] =
           (byte)(&stack0x09130108)[(longlong)param_1 * 2] >> 1;
      *unaff_RBX = *unaff_RBX + unaff_retaddr;
      bRamc009d00be00df00f = (byte)uVar6 ^ (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar9 = (ulonglong)((int)puVar8 + 0x5000a54) ^ 0xf;
  pcVar1 = (char *)(uVar9 - 0x2fffccbe);
  *pcVar1 = *pcVar1 + (char)uVar9;
  uVar6 = *unaff_RSI;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  piVar4 = (int *)((ulonglong)uVar6 * 2);
  *piVar4 = *piVar4 + uVar6 + (uint)CARRY1(bVar2,unaff_R12B);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

