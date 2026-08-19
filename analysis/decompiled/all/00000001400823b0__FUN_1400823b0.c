// Function: FUN_1400823b0
// Addr: 1400823b0
// Size: 67 bytes


void FUN_1400823b0(char *param_1)

{
  (*DAT_1404262d0)(*(undefined8 *)(param_1 + 0x10),0);
  if (*param_1 != '\0') {
    (*DAT_1404262d0)(*(undefined8 *)(param_1 + 8),0);
    if (*param_1 != '\0') {
      func_0x00014028aff0(0x10);
      return;
    }
  }
  return;
}

