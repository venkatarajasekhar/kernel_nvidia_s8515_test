/*
 * drivers/video/tegra/host/host1x/hw_host1x03_sync.h
 *
 * Copyright (c) 2012-2013, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

 /*
  * Function naming determines intended use:
  *
  *     <x>_r(void) : Returns the offset for register <x>.
  *
  *     <x>_w(void) : Returns the word offset for word (4 byte) element <x>.
  *
  *     <x>_<y>_s(void) : Returns size of field <y> of register <x> in bits.
  *
  *     <x>_<y>_f(u32 v) : Returns a value based on 'v' which has been shifted
  *         and masked to place it at field <y> of register <x>.  This value
  *         can be |'d with others to produce a full register value for
  *         register <x>.
  *
  *     <x>_<y>_m(void) : Returns a mask for field <y> of register <x>.  This
  *         value can be ~'d and then &'d to clear the value of field <y> for
  *         register <x>.
  *
  *     <x>_<y>_<z>_f(void) : Returns the constant value <z> after being shifted
  *         to place it at field <y> of register <x>.  This value can be |'d
  *         with others to produce a full register value for <x>.
  *
  *     <x>_<y>_v(u32 r) : Returns the value of field <y> from a full register
  *         <x> value 'r' after being shifted to place its LSB at bit 0.
  *         This value is suitable for direct comparison with other unshifted
  *         values appropriate for use in field <y> of register <x>.
  *
  *     <x>_<y>_<z>_v(void) : Returns the constant value for <z> defined for
  *         field <y> of register <x>.  This value is suitable for direct
  *         comparison with unshifted values appropriate for use in field <y>
  *         of register <x>.
  */

#ifndef __hw_host1x03_sync_h__
#define __hw_host1x03_sync_h__
/*This file is autogenerated.  Do not edit. */

static inline u32 host1x_sync_intstatus_r(void)
{
	return 0x0;
}
static inline u32 host1x_sync_intmask_r(void)
{
	return 0x4;
}
static inline u32 host1x_sync_intc0mask_r(void)
{
	return 0x8;
}
static inline u32 host1x_sync_hintstatus_r(void)
{
	return 0x20;
}
static inline u32 host1x_sync_hintstatus_gr3d_actmon_intr_s(void)
{
	return 1;
}
static inline u32 host1x_sync_hintstatus_gr3d_actmon_intr_f(u32 v)
{
	return (v & 0x1) << 14;
}
static inline u32 host1x_sync_hintstatus_gr3d_actmon_intr_m(void)
{
	return 0x1 << 14;
}
static inline u32 host1x_sync_hintstatus_gr3d_actmon_intr_v(u32 r)
{
	return (r >> 14) & 0x1;
}
static inline u32 host1x_sync_hintmask_r(void)
{
	return 0x24;
}
static inline u32 host1x_sync_hintstatus_ext_r(void)
{
	return 0x28;
}
static inline u32 host1x_sync_hintstatus_ext_ip_read_int_s(void)
{
	return 1;
}
static inline u32 host1x_sync_hintstatus_ext_ip_read_int_f(u32 v)
{
	return (v & 0x1) << 30;
}
static inline u32 host1x_sync_hintstatus_ext_ip_read_int_m(void)
{
	return 0x1 << 30;
}
static inline u32 host1x_sync_hintstatus_ext_ip_read_int_v(u32 r)
{
	return (r >> 30) & 0x1;
}
static inline u32 host1x_sync_hintstatus_ext_ip_write_int_s(void)
{
	return 1;
}
static inline u32 host1x_sync_hintstatus_ext_ip_write_int_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 host1x_sync_hintstatus_ext_ip_write_int_m(void)
{
	return 0x1 << 31;
}
static inline u32 host1x_sync_hintstatus_ext_ip_write_int_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 host1x_sync_hintmask_ext_r(void)
{
	return 0x2c;
}
static inline u32 host1x_sync_cmdproc_stat_r(void)
{
	return 0xa8;
}
static inline u32 host1x_sync_cmdproc_stop_r(void)
{
	return 0xac;
}
static inline u32 host1x_sync_ch_teardown_r(void)
{
	return 0xb0;
}
static inline u32 host1x_sync_mod_teardown_r(void)
{
	return 0xb4;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_f(u32 v)
{
	return (v & 0x1) << 8;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_m(void)
{
	return 0x1 << 8;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_v(u32 r)
{
	return (r >> 8) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_display_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_f(u32 v)
{
	return (v & 0x1) << 9;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_m(void)
{
	return 0x1 << 9;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_v(u32 r)
{
	return (r >> 9) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_displayb_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_f(u32 v)
{
	return (v & 0x1) << 3;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_m(void)
{
	return 0x1 << 3;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_v(u32 r)
{
	return (r >> 3) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_epp_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_f(u32 v)
{
	return (v & 0x1) << 6;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_m(void)
{
	return 0x1 << 6;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_v(u32 r)
{
	return (r >> 6) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_gr3d_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_f(u32 v)
{
	return (v & 0x1) << 4;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_m(void)
{
	return 0x1 << 4;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_v(u32 r)
{
	return (r >> 4) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_isp_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_f(u32 v)
{
	return (v & 0x1) << 12;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_m(void)
{
	return 0x1 << 12;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_v(u32 r)
{
	return (r >> 12) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_dsi_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_f(u32 v)
{
	return (v & 0x1) << 10;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_m(void)
{
	return 0x1 << 10;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_v(u32 r)
{
	return (r >> 10) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_hdmi_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_f(u32 v)
{
	return (v & 0x1) << 2;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_m(void)
{
	return 0x1 << 2;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_v(u32 r)
{
	return (r >> 2) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_vi_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_f(u32 v)
{
	return (v & 0x1) << 5;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_m(void)
{
	return 0x1 << 5;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_v(u32 r)
{
	return (r >> 5) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_gr2d_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_f(u32 v)
{
	return (v & 0x1) << 19;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_m(void)
{
	return 0x1 << 19;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_v(u32 r)
{
	return (r >> 19) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_msenc_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_f(u32 v)
{
	return (v & 0x1) << 20;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_m(void)
{
	return 0x1 << 20;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_v(u32 r)
{
	return (r >> 20) & 0x1;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_no_action_v(void)
{
	return 0;
}
static inline u32 host1x_sync_mod_teardown_tsec_teardown_teardown_v(void)
{
	return 1;
}
static inline u32 host1x_sync_usec_clk_r(void)
{
	return 0x1a4;
}
static inline u32 host1x_sync_ctxsw_timeout_cfg_r(void)
{
	return 0x1a8;
}
static inline u32 host1x_sync_ip_busy_timeout_r(void)
{
	return 0x1bc;
}
static inline u32 host1x_sync_ip_read_timeout_addr_r(void)
{
	return 0x1c0;
}
static inline u32 host1x_sync_ip_write_timeout_addr_r(void)
{
	return 0x1c4;
}
static inline u32 host1x_sync_mlock_0_r(void)
{
	return 0x2c0;
}
static inline u32 host1x_sync_mlock_owner_0_r(void)
{
	return 0x340;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_owner_chid_0_s(void)
{
	return 4;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_owner_chid_0_f(u32 v)
{
	return (v & 0xf) << 8;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_owner_chid_0_m(void)
{
	return 0xf << 8;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_owner_chid_0_v(u32 r)
{
	return (r >> 8) & 0xf;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_cpu_owns_0_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_cpu_owns_0_f(u32 v)
{
	return (v & 0x1) << 1;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_cpu_owns_0_m(void)
{
	return 0x1 << 1;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_cpu_owns_0_v(u32 r)
{
	return (r >> 1) & 0x1;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_ch_owns_0_s(void)
{
	return 1;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_ch_owns_0_f(u32 v)
{
	return (v & 0x1) << 0;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_ch_owns_0_m(void)
{
	return 0x1 << 0;
}
static inline u32 host1x_sync_mlock_owner_0_mlock_ch_owns_0_v(u32 r)
{
	return (r >> 0) & 0x1;
}
static inline u32 host1x_sync_syncpt_base_0_r(void)
{
	return 0x600;
}
static inline u32 host1x_sync_cfpeek_ctrl_r(void)
{
	return 0x74c;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_addr_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_addr_f(u32 v)
{
	return (v & 0x3ff) << 0;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_addr_m(void)
{
	return 0x3ff << 0;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_addr_v(u32 r)
{
	return (r >> 0) & 0x3ff;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_channr_s(void)
{
	return 4;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_channr_f(u32 v)
{
	return (v & 0xf) << 16;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_channr_m(void)
{
	return 0xf << 16;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_channr_v(u32 r)
{
	return (r >> 16) & 0xf;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_ena_s(void)
{
	return 1;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_ena_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_ena_m(void)
{
	return 0x1 << 31;
}
static inline u32 host1x_sync_cfpeek_ctrl_cfpeek_ena_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 host1x_sync_cfpeek_read_r(void)
{
	return 0x750;
}
static inline u32 host1x_sync_cfpeek_ptrs_r(void)
{
	return 0x754;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_rd_ptr_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_rd_ptr_f(u32 v)
{
	return (v & 0x3ff) << 0;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_rd_ptr_m(void)
{
	return 0x3ff << 0;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_rd_ptr_v(u32 r)
{
	return (r >> 0) & 0x3ff;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_wr_ptr_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_wr_ptr_f(u32 v)
{
	return (v & 0x3ff) << 16;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_wr_ptr_m(void)
{
	return 0x3ff << 16;
}
static inline u32 host1x_sync_cfpeek_ptrs_cf_wr_ptr_v(u32 r)
{
	return (r >> 16) & 0x3ff;
}
static inline u32 host1x_sync_actmon_ctrl_r(void)
{
	return 0x9d0;
}
static inline u32 host1x_sync_actmon_ctrl_enb_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_enb_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 host1x_sync_actmon_ctrl_enb_m(void)
{
	return 0x1 << 31;
}
static inline u32 host1x_sync_actmon_ctrl_enb_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_en_f(u32 v)
{
	return (v & 0x1) << 30;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_en_m(void)
{
	return 0x1 << 30;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_en_v(u32 r)
{
	return (r >> 30) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_en_f(u32 v)
{
	return (v & 0x1) << 29;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_en_m(void)
{
	return 0x1 << 29;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_en_v(u32 r)
{
	return (r >> 29) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_num_s(void)
{
	return 3;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_num_f(u32 v)
{
	return (v & 0x7) << 26;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_num_m(void)
{
	return 0x7 << 26;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_above_wmark_num_v(u32 r)
{
	return (r >> 26) & 0x7;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_num_s(void)
{
	return 3;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_num_f(u32 v)
{
	return (v & 0x7) << 23;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_num_m(void)
{
	return 0x7 << 23;
}
static inline u32 host1x_sync_actmon_ctrl_consecutive_below_wmark_num_v(u32 r)
{
	return (r >> 23) & 0x7;
}
static inline u32 host1x_sync_actmon_ctrl_when_overflow_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_when_overflow_en_f(u32 v)
{
	return (v & 0x1) << 22;
}
static inline u32 host1x_sync_actmon_ctrl_when_overflow_en_m(void)
{
	return 0x1 << 22;
}
static inline u32 host1x_sync_actmon_ctrl_when_overflow_en_v(u32 r)
{
	return (r >> 22) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_avg_above_wmark_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_avg_above_wmark_en_f(u32 v)
{
	return (v & 0x1) << 21;
}
static inline u32 host1x_sync_actmon_ctrl_avg_above_wmark_en_m(void)
{
	return 0x1 << 21;
}
static inline u32 host1x_sync_actmon_ctrl_avg_above_wmark_en_v(u32 r)
{
	return (r >> 21) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_avg_below_wmark_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_avg_below_wmark_en_f(u32 v)
{
	return (v & 0x1) << 20;
}
static inline u32 host1x_sync_actmon_ctrl_avg_below_wmark_en_m(void)
{
	return 0x1 << 20;
}
static inline u32 host1x_sync_actmon_ctrl_avg_below_wmark_en_v(u32 r)
{
	return (r >> 20) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_at_end_en_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_at_end_en_f(u32 v)
{
	return (v & 0x1) << 19;
}
static inline u32 host1x_sync_actmon_ctrl_at_end_en_m(void)
{
	return 0x1 << 19;
}
static inline u32 host1x_sync_actmon_ctrl_at_end_en_v(u32 r)
{
	return (r >> 19) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_enb_periodic_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_ctrl_enb_periodic_f(u32 v)
{
	return (v & 0x1) << 18;
}
static inline u32 host1x_sync_actmon_ctrl_enb_periodic_m(void)
{
	return 0x1 << 18;
}
static inline u32 host1x_sync_actmon_ctrl_enb_periodic_v(u32 r)
{
	return (r >> 18) & 0x1;
}
static inline u32 host1x_sync_actmon_ctrl_k_val_s(void)
{
	return 3;
}
static inline u32 host1x_sync_actmon_ctrl_k_val_f(u32 v)
{
	return (v & 0x7) << 10;
}
static inline u32 host1x_sync_actmon_ctrl_k_val_m(void)
{
	return 0x7 << 10;
}
static inline u32 host1x_sync_actmon_ctrl_k_val_v(u32 r)
{
	return (r >> 10) & 0x7;
}
static inline u32 host1x_sync_actmon_init_avg_r(void)
{
	return 0x9dc;
}
static inline u32 host1x_sync_actmon_avg_upper_wmark_r(void)
{
	return 0x9e0;
}
static inline u32 host1x_sync_actmon_avg_lower_wmark_r(void)
{
	return 0x9e4;
}
static inline u32 host1x_sync_actmon_count_weight_r(void)
{
	return 0x9e8;
}
static inline u32 host1x_sync_actmon_avg_count_r(void)
{
	return 0x9f0;
}
static inline u32 host1x_sync_actmon_status_r(void)
{
	return 0x9f4;
}
static inline u32 host1x_sync_actmon_status_sample_period_s(void)
{
	return 8;
}
static inline u32 host1x_sync_actmon_status_sample_period_f(u32 v)
{
	return (v & 0xff) << 3;
}
static inline u32 host1x_sync_actmon_status_sample_period_m(void)
{
	return 0xff << 3;
}
static inline u32 host1x_sync_actmon_status_sample_period_v(u32 r)
{
	return (r >> 3) & 0xff;
}
static inline u32 host1x_sync_actmon_status_status_source_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_status_status_source_f(u32 v)
{
	return (v & 0x1) << 2;
}
static inline u32 host1x_sync_actmon_status_status_source_m(void)
{
	return 0x1 << 2;
}
static inline u32 host1x_sync_actmon_status_status_source_v(u32 r)
{
	return (r >> 2) & 0x1;
}
static inline u32 host1x_sync_actmon_status_status_source_msec_v(void)
{
	return 0;
}
static inline u32 host1x_sync_actmon_status_status_source_usec_v(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_f(u32 v)
{
	return (v & 0x1) << 0;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_m(void)
{
	return 0x1 << 0;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_v(u32 r)
{
	return (r >> 0) & 0x1;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_inactive_v(void)
{
	return 0;
}
static inline u32 host1x_sync_actmon_status_gr3d_mon_act_active_v(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_r(void)
{
	return 0x9f8;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_upper_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_upper_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_upper_m(void)
{
	return 0x1 << 31;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_upper_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_lower_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_lower_f(u32 v)
{
	return (v & 0x1) << 30;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_lower_m(void)
{
	return 0x1 << 30;
}
static inline u32 host1x_sync_actmon_intr_status_consecutive_lower_v(u32 r)
{
	return (r >> 30) & 0x1;
}
static inline u32 host1x_sync_actmon_intr_status_at_end_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_at_end_f(u32 v)
{
	return (v & 0x1) << 29;
}
static inline u32 host1x_sync_actmon_intr_status_at_end_m(void)
{
	return 0x1 << 29;
}
static inline u32 host1x_sync_actmon_intr_status_at_end_v(u32 r)
{
	return (r >> 29) & 0x1;
}
static inline u32 host1x_sync_actmon_intr_status_when_overflow_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_when_overflow_f(u32 v)
{
	return (v & 0x1) << 26;
}
static inline u32 host1x_sync_actmon_intr_status_when_overflow_m(void)
{
	return 0x1 << 26;
}
static inline u32 host1x_sync_actmon_intr_status_when_overflow_v(u32 r)
{
	return (r >> 26) & 0x1;
}
static inline u32 host1x_sync_actmon_intr_status_avg_below_wmark_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_avg_below_wmark_f(u32 v)
{
	return (v & 0x1) << 25;
}
static inline u32 host1x_sync_actmon_intr_status_avg_below_wmark_m(void)
{
	return 0x1 << 25;
}
static inline u32 host1x_sync_actmon_intr_status_avg_below_wmark_v(u32 r)
{
	return (r >> 25) & 0x1;
}
static inline u32 host1x_sync_actmon_intr_status_avg_above_wmark_s(void)
{
	return 1;
}
static inline u32 host1x_sync_actmon_intr_status_avg_above_wmark_f(u32 v)
{
	return (v & 0x1) << 24;
}
static inline u32 host1x_sync_actmon_intr_status_avg_above_wmark_m(void)
{
	return 0x1 << 24;
}
static inline u32 host1x_sync_actmon_intr_status_avg_above_wmark_v(u32 r)
{
	return (r >> 24) & 0x1;
}
static inline u32 host1x_sync_cf0_setup_r(void)
{
	return 0xc00;
}
static inline u32 host1x_sync_cf0_setup_cf0_base_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cf0_setup_cf0_base_f(u32 v)
{
	return (v & 0x3ff) << 0;
}
static inline u32 host1x_sync_cf0_setup_cf0_base_m(void)
{
	return 0x3ff << 0;
}
static inline u32 host1x_sync_cf0_setup_cf0_base_v(u32 r)
{
	return (r >> 0) & 0x3ff;
}
static inline u32 host1x_sync_cf0_setup_cf0_limit_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cf0_setup_cf0_limit_f(u32 v)
{
	return (v & 0x3ff) << 16;
}
static inline u32 host1x_sync_cf0_setup_cf0_limit_m(void)
{
	return 0x3ff << 16;
}
static inline u32 host1x_sync_cf0_setup_cf0_limit_v(u32 r)
{
	return (r >> 16) & 0x3ff;
}
static inline u32 host1x_sync_cbread0_r(void)
{
	return 0xc80;
}
static inline u32 host1x_sync_cbstat_0_r(void)
{
	return 0xcc0;
}
static inline u32 host1x_sync_cbstat_0_cboffset0_s(void)
{
	return 16;
}
static inline u32 host1x_sync_cbstat_0_cboffset0_f(u32 v)
{
	return (v & 0xffff) << 0;
}
static inline u32 host1x_sync_cbstat_0_cboffset0_m(void)
{
	return 0xffff << 0;
}
static inline u32 host1x_sync_cbstat_0_cboffset0_v(u32 r)
{
	return (r >> 0) & 0xffff;
}
static inline u32 host1x_sync_cbstat_0_cbclass0_s(void)
{
	return 10;
}
static inline u32 host1x_sync_cbstat_0_cbclass0_f(u32 v)
{
	return (v & 0x3ff) << 16;
}
static inline u32 host1x_sync_cbstat_0_cbclass0_m(void)
{
	return 0x3ff << 16;
}
static inline u32 host1x_sync_cbstat_0_cbclass0_v(u32 r)
{
	return (r >> 16) & 0x3ff;
}
static inline u32 host1x_sync_syncpt_thresh_cpu0_int_status_r(void)
{
	return 0xe80;
}
static inline u32 host1x_sync_syncpt_thresh_cpu1_int_status_r(void)
{
	return 0xea0;
}
static inline u32 host1x_sync_syncpt_thresh_int_disable_r(void)
{
	return 0xf00;
}
static inline u32 host1x_sync_syncpt_thresh_int_enable_cpu0_r(void)
{
	return 0xf20;
}
static inline u32 host1x_sync_syncpt_cpu_incr_r(void)
{
	return 0xf60;
}
static inline u32 host1x_sync_syncpt_0_r(void)
{
	return 0xf80;
}
static inline u32 host1x_sync_syncpt_int_thresh_0_r(void)
{
	return 0x1380;
}

#endif /* __hw_host1x03_sync_h__ */
