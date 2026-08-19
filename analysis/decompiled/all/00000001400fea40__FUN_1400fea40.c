// Function: FUN_1400fea40
// Addr: 1400fea40
// Size: 6 bytes


/* WARNING: Removing unreachable block (ram,0x000140100938) */
/* WARNING: Removing unreachable block (ram,0x0001401008f1) */
/* WARNING: Removing unreachable block (ram,0x0001401008b9) */
/* WARNING: Removing unreachable block (ram,0x000140100830) */
/* WARNING: Removing unreachable block (ram,0x00014010085d) */
/* WARNING: Removing unreachable block (ram,0x000140100821) */
/* WARNING: Removing unreachable block (ram,0x00014010089a) */
/* WARNING: Removing unreachable block (ram,0x0001401008d8) */
/* WARNING: Removing unreachable block (ram,0x00014010090a) */
/* WARNING: Removing unreachable block (ram,0x000140100915) */
/* WARNING: Removing unreachable block (ram,0x000140100910) */
/* WARNING: Removing unreachable block (ram,0x00014010091d) */
/* WARNING: Removing unreachable block (ram,0x00014010099b) */
/* WARNING: Removing unreachable block (ram,0x0001401009b4) */
/* WARNING: Removing unreachable block (ram,0x0001401009b7) */
/* WARNING: Removing unreachable block (ram,0x0001401009ec) */
/* WARNING: Removing unreachable block (ram,0x0001401009fe) */
/* WARNING: Removing unreachable block (ram,0x000140100a03) */
/* WARNING: Removing unreachable block (ram,0x000140100a86) */
/* WARNING: Removing unreachable block (ram,0x000140100a17) */
/* WARNING: Removing unreachable block (ram,0x000140100a45) */
/* WARNING: Removing unreachable block (ram,0x000140100a4a) */
/* WARNING: Removing unreachable block (ram,0x000140100a58) */
/* WARNING: Removing unreachable block (ram,0x000140100a5d) */
/* WARNING: Removing unreachable block (ram,0x000140100a9e) */
/* WARNING: Removing unreachable block (ram,0x000140100ab0) */
/* WARNING: Removing unreachable block (ram,0x000140100ac0) */
/* WARNING: Removing unreachable block (ram,0x000140100ad5) */
/* WARNING: Removing unreachable block (ram,0x000140100adc) */
/* WARNING: Removing unreachable block (ram,0x000140100ae5) */
/* WARNING: Removing unreachable block (ram,0x000140100af0) */
/* WARNING: Removing unreachable block (ram,0x000140100af5) */
/* WARNING: Removing unreachable block (ram,0x000140100b0b) */
/* WARNING: Removing unreachable block (ram,0x000140100b1d) */
/* WARNING: Removing unreachable block (ram,0x000140100b27) */
/* WARNING: Removing unreachable block (ram,0x000140100b3c) */
/* WARNING: Removing unreachable block (ram,0x000140100b87) */
/* WARNING: Removing unreachable block (ram,0x000140100b4d) */
/* WARNING: Removing unreachable block (ram,0x000140100b58) */

void FUN_1400fea40(longlong param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 8) = param_2;
  iVar1 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x168));
  if (iVar1 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x160) != 0) && ((*(uint *)(param_1 + 0x17c) >> 1 & 1) == 0)) {
    (*DAT_140426818)(*(undefined8 *)(param_1 + 0x168),0x65,0x19,0);
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 2;
    if (*(char *)(param_1 + 8) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    }
  }
  (*DAT_140426b00)(*(undefined8 *)(param_1 + 0x168),0,1);
  return;
}

