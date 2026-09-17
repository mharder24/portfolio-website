# CHBE 4200 Portfolio Website

A GitHub Pages portfolio built with the [Minimal Mistakes](https://mmistakes.github.io/minimal-mistakes/)
Jekyll theme, the same theme as the class example site (https://davidflorianjr.github.io/).

## Site map

| Required section    | File                              | URL           |
|---------------------|-----------------------------------|---------------|
| Home/Index          | `index.md`                        | `/`           |
| About               | `_pages/about.md`                 | `/about/`     |
| Project page        | `_portfolio/syringe-pump.md`      | `/portfolio/syringe-pump/` |
| Portfolio Archive   | `_pages/portfolio-archive.md`     | `/portfolio/` (updates automatically) |

## Publish it (no software needed)

1. Sign in to GitHub and create a **new public repository** named exactly `mharder24.github.io`.
2. On the empty repo page, click **uploading an existing file**, then drag in **everything inside
   this folder** (the files and folders, not the folder itself). Click **Commit changes**.
3. Go to **Settings → Pages**. Under *Build and deployment*, choose **Deploy from a branch**,
   branch **main**, folder **/ (root)**, and click **Save**.
4. Wait 1–3 minutes and visit `https://mharder24.github.io`. Build progress shows under the **Actions** tab.

## Make it yours

- Fill in the `[bracketed placeholders]` in `_portfolio/syringe-pump.md`.
- Add new skills to `_pages/about.md` as you complete trainings in the course.
- Add your photos to `assets/images/` (see the note in that folder).
- Replace `code/syringe_pump.ino` with your real Arduino code.
- Paste your Fusion 360 embed link into the project page.
- You can edit any file right on GitHub (open it and click the pencil icon). The site rebuilds itself.

## Add a new portfolio item

Copy `_portfolio/syringe-pump.md`, rename it (e.g. `_portfolio/my-new-project.md`), and update the
`title`, `excerpt`, and `header: teaser` image at the top. It appears on the Portfolio page automatically.

## Security reminder

Don't include your Vanderbilt email, phone number, or physical address anywhere on the site.
