// Function: FUN_140124140
// Addr: 140124140
// Size: 80 bytes


void FUN_140124140(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  *(float *)(param_1 + 0x2c) = param_2;
  if (plVar1 != (longlong *)0x0) {
    if (param_2 <= DAT_1404925ec) {
      param_2 = DAT_1404925ec;
    }
    fVar2 = (float)FUN_14041d940(param_2);
    fVar3 = fVar2 * DAT_140492944;
    if (fVar2 * DAT_140492944 <= DAT_140492a20) {
      fVar3 = DAT_140492a20;
    }
                    /* WARNING: Could not recover jumptable at 0x000140124186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,(int)fVar3);
    return;
  }
  return;
}

