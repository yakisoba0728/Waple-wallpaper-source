// Function: FUN_14018e140
// Addr: 14018e140
// Size: 264 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e140(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined1 local_2c [12];
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (param_3 == '\0') {
    local_34 = DAT_1404927d4 - *(float *)(lVar4 + 0x90);
    local_20 = _DAT_140492ef0;
    uStack_18 = _UNK_140492ef8;
    local_38 = *(undefined4 *)(lVar4 + 0x8c);
    local_30 = 0x3f000000;
    puVar5 = (undefined8 *)
             FUN_14019e060(local_2c,&local_38,*(undefined8 *)(lVar4 + 0x38),
                           *(undefined8 *)(lVar4 + 0x40),&local_20);
    *(undefined8 *)param_2 = *puVar5;
    param_2[2] = *(float *)(puVar5 + 1);
    if ((*(uint *)(*(longlong *)(param_1 + 0x90) + 0x118) & 0x400) != 0) {
      param_2[2] = 0.0;
    }
    return;
  }
  fVar6 = *(float *)(lVar4 + 0x8c);
  if ((*(uint *)(lVar4 + 0x118) & 0x800) != 0) {
    fVar1 = *(float *)(lVar4 + 0x78);
    fVar2 = *(float *)(lVar4 + 0x90);
    fVar6 = DAT_1404927d4 - fVar6;
    fVar3 = *(float *)(lVar4 + 0x74);
    param_2[2] = 0.0;
    param_2[1] = fVar1 * fVar2;
    *param_2 = fVar6 * fVar3;
    return;
  }
  fVar1 = *(float *)(lVar4 + 0x90);
  fVar2 = *(float *)(lVar4 + 0x78);
  fVar3 = *(float *)(lVar4 + 0x74);
  param_2[2] = 0.0;
  param_2[1] = fVar1 * fVar2;
  *param_2 = fVar6 * fVar3;
  return;
}

