/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeVpcClassicLink.</p>
   */
  class AWS_EC2_API DescribeVpcClassicLinkRequest : public EC2Request
  {
  public:
    DescribeVpcClassicLinkRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeVpcClassicLinkRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const{ return m_vpcIds; }

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline void SetVpcIds(const Aws::Vector<Aws::String>& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = value; }

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline void SetVpcIds(Aws::Vector<Aws::String>&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = value; }

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline DescribeVpcClassicLinkRequest& WithVpcIds(const Aws::Vector<Aws::String>& value) { SetVpcIds(value); return *this;}

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline DescribeVpcClassicLinkRequest& WithVpcIds(Aws::Vector<Aws::String>&& value) { SetVpcIds(value); return *this;}

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline DescribeVpcClassicLinkRequest& AddVpcIds(const Aws::String& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline DescribeVpcClassicLinkRequest& AddVpcIds(Aws::String&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

    /**
     * <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
     */
    inline DescribeVpcClassicLinkRequest& AddVpcIds(const char* value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline DescribeVpcClassicLinkRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline DescribeVpcClassicLinkRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline DescribeVpcClassicLinkRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>is-classic-link-enabled</code> -
     * Whether the VPC is enabled for ClassicLink (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p><code>tag</code>:<i>key</i>=<i>value</i>
     * - The key/value combination of a tag assigned to the resource.</p> </li> <li>
     * <p><code>tag-key</code> - The key of a tag assigned to the resource. This filter
     * is independent of the <code>tag-value</code> filter. For example, if you use
     * both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any
     * resources assigned both the tag key Purpose (regardless of what the tag's value
     * is), and the tag value X (regardless of what the tag's key is). If you want to
     * list only resources where Purpose is X, see the
     * <code>tag</code>:<i>key</i>=<i>value</i> filter.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the resource. This
     * filter is independent of the <code>tag-key</code> filter.</p> </li> </ul>
     */
    inline DescribeVpcClassicLinkRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
